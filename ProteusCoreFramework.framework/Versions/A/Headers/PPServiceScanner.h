//
//  PPServiceScanner.h
//  ProteusCoreFramework
//
//  Created by Yazeid Rahman on 16/1/14.
//  Copyright (c) 2014 Philips. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <PPScanner.h>

@interface PPServiceScanner : PPScanner {
    BOOL isLocal;
}

-(NSArray *)getDeviceList;

@end
