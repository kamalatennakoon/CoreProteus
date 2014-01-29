//
//  PPMediaCapabilityItem.h
//  ProteusCoreFramework
//
//  Created by Lakshita on 21/1/14.
//  Copyright (c) 2014 Philips. All rights reserved.
//

#import <ProteusCoreFramework/ProteusCoreFramework.h>
#import "PPMediaAudio.h"
#import "PPMediaVideo.h"
#import "PPMediaPhoto.h"
#import "PPMediaFolder.h"
#import "PPMediaRoot.h"

@interface PPMediaCapabilityItem : ProteusCoreFramework

{
    NSString *mediaItemType;
    
    PPMediaAudio    *audioItem;
    PPMediaVideo    *videoItem;
    PPMediaPhoto    *photoItem;
    PPMediaFolder   *folderItem;
    PPMediaRoot     *rootItem;
    
}

@end
