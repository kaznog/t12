//
//  BlockSprite.cpp
//  PoteTsum
//
//  Created by 野口一也 on 2014/04/22.
//
//

#include "BlockSprite.h"

BlockSprite::BlockSprite()
: _mustBeDestroyed(false)
, _typeBlock(-1)
{
    
}

BlockSprite* BlockSprite::createWithSpriteFrame(SpriteFrame *spriteFrame)
{
    BlockSprite *sprite = new BlockSprite();
    if (spriteFrame && sprite && sprite->initWithSpriteFrame(spriteFrame))
    {
        sprite->autorelease();
        return sprite;
    }
    CC_SAFE_DELETE(sprite);
    return nullptr;
}

BlockSprite* BlockSprite::createWithSpriteFrameName(const std::string& spriteFrameName)
{
    SpriteFrame *frame = SpriteFrameCache::getInstance()->getSpriteFrameByName(spriteFrameName);
    
#if COCOS2D_DEBUG > 0
    char msg[256] = {0};
    sprintf(msg, "Invalid spriteFrameName: %s", spriteFrameName.c_str());
    CCASSERT(frame != nullptr, msg);
#endif
    
    return createWithSpriteFrame(frame);
}
