//
//  IphoneListModel.h
//  iOS_Demo
//
//  Created by 蔡强 on 2018/6/26.
//  Copyright © 2018年 蔡强. All rights reserved.
//

#import <JSONModel.h>
#import "IphoneListItemModel.h"

@protocol IphoneListItemModel;

@interface IphoneListModel : JSONModel

@property (nonatomic, strong) NSArray <IphoneListItemModel> *detail_list;

@end
