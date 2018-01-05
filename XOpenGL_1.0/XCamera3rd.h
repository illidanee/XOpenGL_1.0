#pragma once

#include <gl/glew.h>
#include <gl/wglew.h>
#include <gl/GL.h>
#include <gl/GLU.h>

#include "XMath.h"

namespace Smile
{
	class XCamera3rd
	{
	public:
		XCamera3rd();
		~XCamera3rd();

		void Init(XVec3f pos, XVec3f aim, XVec3f up);

		void LookAt(XVec3f aim);
		void Update();

		void OnRotateX(float delta);
		void OnRotateY(float delta);
		void OnScaleLength(float delta);

	private:
		XVec3f _pos;
		XVec3f _aim;
		XVec3f _up;

		XVec3f _dir;
		XVec3f _right;

		float _length;
		float _speed;
	};
}
