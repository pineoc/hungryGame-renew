#ifndef __STAGESELECT_SCENE_H__
#define __STAGESELECT_SCENE_H__
/*
* 2013 08 18
* Joung Daun
* Stage Select
*/
#include "cocos2d.h"
#include "SimpleAudioEngine.h"

using namespace cocos2d;

class stageSelectScene : public LayerColor
{
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  

    // there's no 'id' in cpp, so we recommand to return the exactly class pointer
    static cocos2d::Scene* createScene();
    
   
	void stageMenu(Ref* pSender);
	void menuGoBackCallback(Ref* pSender);
	void onExit();
	void goStageScene();
	void doMsgRecv(Ref* obj);
	int sStageNum; // for stage of each building
	int buildingNum;
    // implement the "static node()" method manually
	CREATE_FUNC(stageSelectScene);
};

#endif  // __BUILDING_SCENE_H__
