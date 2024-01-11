/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * Licensed under the Oculus SDK License Agreement (the "License");
 * you may not use the Oculus SDK except in compliance with the License,
 * which is provided at the time of installation or download, or which
 * otherwise accompanies this software in either electronic or hard copy form.
 *
 * You may obtain a copy of the License at
 *
 * https://developer.oculus.com/licenses/oculussdk/
 *
 * Unless required by applicable law or agreed to in writing, the Oculus SDK
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

using UnityEngine;
using UnityEngine.Events;
using System.Collections.Generic;


namespace Oculus.Interaction.Samples
{
    public class RespawnOnDrop : MonoBehaviour
    {
        [SerializeField]
        private bool useFixedPosition;
        [SerializeField]
        private Vector3 fixedPosition = new Vector3(0f, 0f, 0f);
        private List<Vector3> columnPosition = new List<Vector3>();
        public int posIndex;
        [SerializeField]
        private float _yThresholdForRespawn;

        [SerializeField]
        private UnityEvent _whenRespawned = new UnityEvent();

        public UnityEvent WhenRespawned => _whenRespawned;

        // cached starting transform
        private Vector3 _initialPosition;
        private Quaternion _initialRotation;
        private Vector3 _initialScale;

        private TwoGrabFreeTransformer[] _freeTransformers;
        private Rigidbody _rigidBody;


        protected virtual void OnEnable()
        {
            _initialPosition = transform.position;
            _initialRotation = transform.rotation;
            _initialScale = transform.localScale;
            _freeTransformers = GetComponents<TwoGrabFreeTransformer>();
            _rigidBody = GetComponent<Rigidbody>();
            columnPosition.Add(new Vector3(-0.1743908f, 1.146f, 0.329422f));
            columnPosition.Add(new Vector3(0.02880099f, 1.146f, 0.329422f));
            columnPosition.Add(new Vector3(0.2308011f, 1.146f, 0.329422f));
            posIndex = 0;
            useFixedPosition = true;
        }
        public void respawn()
        {
            transform.position = _initialPosition;
            transform.rotation = _initialRotation;
            transform.localScale = _initialScale;

            if (_rigidBody)
            {
                _rigidBody.velocity = Vector3.zero;
                _rigidBody.angularVelocity = Vector3.zero;
            }
            foreach (var freeTransformer in _freeTransformers)
            {
                freeTransformer.MarkAsBaseScale();
            }
        }
        protected virtual void Update()
        {
            if (transform.position.y < _yThresholdForRespawn)
            {
                if (useFixedPosition)
                {
                    transform.position = columnPosition[posIndex];
                }
                else
                {
                    transform.position = _initialPosition;
                }
                transform.rotation = _initialRotation;
                transform.localScale = _initialScale;

                if (_rigidBody)
                {
                    if (useFixedPosition)
                    {
                        _rigidBody.velocity = new Vector3(0f, 0f, 0.1f);
                    }
                    else
                    {
                        _rigidBody.velocity = Vector3.zero;
                    }
                    _rigidBody.angularVelocity = Vector3.zero;
                }

                foreach (var freeTransformer in _freeTransformers)
                {
                    freeTransformer.MarkAsBaseScale();
                }

                _whenRespawned.Invoke();
            }
        }
    }
}
