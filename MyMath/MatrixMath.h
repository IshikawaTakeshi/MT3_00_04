﻿#include "Vector2.h"
#include "Matrix4x4.h"
#include "Vector3.h"
#include <assert.h>
#define _USE_MATH_DEFINES
#include <cmath>

///////////////////////////////////////////////////////////////////////////////
//	4x4行列
///////////////////////////////////////////////////////////////////////////////[

//行列の加法
Matrix4x4 Add(const Matrix4x4& m1, const Matrix4x4& m2);

//行列の減法
Matrix4x4 Subtract(const Matrix4x4& m1, const Matrix4x4& m2);

//行列の積
Matrix4x4 Multiply(const Matrix4x4& m1, const Matrix4x4& m2);

//逆行列
Matrix4x4 Inverse(const Matrix4x4& m);

//転置行列
Matrix4x4 Transpose(const Matrix4x4& m);

//単位行列の作成
Matrix4x4 MakeIdentity4x4();

//平行移動行列
Matrix4x4 MakeTranslateMatrix(const Vector3& translate);

//拡大縮小行列
Matrix4x4 MakeScaleMatrix(const Vector3& scale);

//X軸回転行列
Matrix4x4 MakeRotateXMatrix(float radian);

//Y軸回転行列
Matrix4x4 MakeRotateYMatrix(float radian);

//Z軸回転行列
Matrix4x4 MakeRotateZMatrix(float radian);

//Matrix4x4からVector3に座標変換
Vector3 Transform(const Vector3& vector, const Matrix4x4& matrix);

//数値表示
void MatirxScreenPrintf(int x, int y, const Matrix4x4& matrix,const char* label);