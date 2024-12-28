#include "Actions/Action.h"
class ChngFillCol :public Action{
private:
	color CLR;
public:
	ChngFillCol(ApplicationManager* pApp);
	virtual void ReadActionParameters();
	virtual void Execute();
};