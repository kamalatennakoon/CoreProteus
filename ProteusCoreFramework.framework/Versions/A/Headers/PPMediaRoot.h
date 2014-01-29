//
//  PPMediaRoot.h
//  ProteusCoreFramework
//
//  Created by Lakshita on 21/1/14.
//  Copyright (c) 2014 Philips. All rights reserved.
//

#import <ProteusCoreFramework/ProteusCoreFramework.h>

@interface PPMediaRoot : ProteusCoreFramework

{
    //int folderIndex;  RootLevel index is always zero
    NSString *folderName;
    int folderItemsCount;
    
    BOOL isReadOnly;
    
    //folderHierarchy
    //NSMutableDictionary *localContents;
    //bookmark

}


@end
