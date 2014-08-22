//
//  BlockSprite.h
//  PoteTsum
//
//  Created by 野口一也 on 2014/04/22.
//
//

#ifndef __PoteTsum__BlockSprite__
#define __PoteTsum__BlockSprite__

#include <iostream>
#include "cocos2d.h"

USING_NS_CC;

class BlockSprite: public Sprite
{
public:
    BlockSprite();
    static BlockSprite* createWithSpriteFrame(SpriteFrame *spriteFrame);
    static BlockSprite* createWithSpriteFrameName(const std::string& spriteFrameName);
protected:
    CC_SYNTHESIZE(bool, _mustBeDestroyed, MustBeDestroyed);
    CC_SYNTHESIZE(int, _typeBlock, TypeBlock);
};

#endif /* defined(__PoteTsum__BlockSprite__) */
