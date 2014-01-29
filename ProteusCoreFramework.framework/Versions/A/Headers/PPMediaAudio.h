//
//  PPMediaAudio.h
//  ProteusCoreFramework
//
//  Created by Lakshita on 21/1/14.
//  Copyright (c) 2014 Philips. All rights reserved.
//

#import <ProteusCoreFramework/ProteusCoreFramework.h>

@interface PPMediaAudio : ProteusCoreFramework
{
    NSString *name;
    NSNumber *objId;
    int objIndex;           // Index relative to parent directory
    
    NSString *albumArtURI;
    NSString *bookMark;
    UIImage *thumbnailImage;
    //BOOL isQueuedForPlay;

    int type;
    
    NSString *albumName;
    NSString *artistName;
    NSString *composerName;
    NSString *genre;
    //NSString *podcastTitle;
    NSString *rating;
    //PPPlayList *playListName;
    
}

@end
