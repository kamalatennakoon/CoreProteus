#import <Foundation/Foundation.h>

@interface PPBrowsableNode : NSObject

#warning return type should be PPNodeItem
-(id)getRootNode;
#warning return type should be PPNodeItem
-(id)getLastSelectedNode;
#warning param type should be PPNodeItem
-(void)browseContent:(id*)node;
@end