#import <Foundation/Foundation.h>

@interface PPBrowsableNodeCallback : NSObject
#warning param type should be PPNodeList
-(void)onBrowseContentFound:(id*)nodes;
#warning param type should be PPNodeItem
-(void)onRootNodeFound:(id*)rootnode;
@end