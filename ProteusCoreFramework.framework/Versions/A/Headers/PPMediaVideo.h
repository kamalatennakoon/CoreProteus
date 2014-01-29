//
//  PPMediaVideo.h
//  ProteusCoreFramework
//
//  Created by Lakshita on 21/1/14.
//  Copyright (c) 2014 Philips. All rights reserved.
//

#import <ProteusCoreFramework/ProteusCoreFramework.h>

@interface PPMediaVideo : ProteusCoreFramework
{
    NSString *name;
    NSNumber *objId;
    int objIndex;           // Index relative to parent directory
    NSString *bookMark;
    
    //NSString *albumArtURI;
    //UIImage *thumbnailImage;
    //BOOL isQueuedForPlay;

    int type;
    
    NSString *albumName;
    NSString *actor;
    NSString *genre;
    NSString *rating;
    NSDate *date;
    
    //PPPlayList *playListName;
}
@end
