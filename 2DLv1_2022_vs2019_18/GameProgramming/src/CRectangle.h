#pragma once
class CRectangle
{
private:
	float mX; //X座標
	float mY; //Y座標
	float mW; //幅
	float mH; //高さ
public:
	CRectangle();
	~CRectangle();
	void Render();
	void Render(float x, float y, float w, float h);
	virtual void Set(float x, float y, float w, float h);
	float X();
	float Y();
	float W();
	float H();
	void Y(float y);
	void X(float x);
	//bool Collision(四角形のポインタ)
	//戻り値
	//true:衝突している
	//false;衝突していない
	bool Collision(CRectangle* pRect);
};