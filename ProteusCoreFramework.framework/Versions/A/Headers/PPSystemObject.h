//
//  PPSystemObject.h
//  ProteusCoreFramework
//
//  Created by Pradeep on 21/1/14.
//  Copyright (c) 2014 Philips. All rights reserved.
//

#import "PPObject.h"
#import "PPCoreCapabilityList.h"

@protocol PPSystemObjectProtocol <NSObject>

-(PPCoreCapabilityList*)getCapabilities;

@end

@interface PPSystemObject : PPObject{
    NSString* _name;
    NSString* _id;
    NSString* _version;
}

-(NSString*)getInfo;
@end

