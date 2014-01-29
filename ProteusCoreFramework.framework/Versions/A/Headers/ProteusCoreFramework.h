//
//  ProteusCoreFramework.h
//  ProteusCoreFramework
//
//  Created by Yazeid Rahman on 17/1/14.
//  Copyright (c) 2014 Philips. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ProteusLinkerFramework/ProteusLinkerFramework.h>

@protocol ProteusCoreFrameworkProtocol <NSObject>

@optional

@end

@interface ProteusCoreFramework : NSObject

+(ProteusCoreFramework *)sharedInstance;


@end
