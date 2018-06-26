//
//  IphoneMenuItemModel.h
//  iOS_Demo
//
//  Created by 蔡强 on 2018/6/26.
//  Copyright © 2018年 蔡强. All rights reserved.
//

#import <JSONModel/JSONModel.h>

@interface IphoneMenuItemModel : JSONModel

@property (nonatomic, assign) NSInteger ID;
@property (nonatomic, copy) NSString *name;

@end
