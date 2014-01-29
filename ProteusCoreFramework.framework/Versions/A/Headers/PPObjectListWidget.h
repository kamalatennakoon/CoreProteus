//
//  PPObjectListWidget.h
//  ProteusCoreFramework
//
//  Created by Reno Reballos on 22/1/14.
//  Copyright (c) 2014 Philips. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PPObjectListWidget : UITableView <UITableViewDelegate, UITableViewDataSource>
-(void)setPPObjectListNumberOfSections:(int)numSec;
-(void)setPPObjectListDataSourceArray:(NSMutableArray *)dataSourceArray;
-(void)reloadPPObjectList;
@end
