//
//  FunctionListViewController.h
//  CodingMart
//
//  Created by Frank on 16/6/11.
//  Copyright © 2016年 net.coding. All rights reserved.
//

#import "BaseViewController.h"
#import "CalcResult.h"

@interface FunctionListViewController : BaseViewController

@property (strong, nonatomic) CalcResult *list;
@property (strong, nonatomic) NSNumber *listID;
@property (strong, nonatomic) NSString *h5String;

@end