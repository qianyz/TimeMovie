//
//  District.h
//  TimeMovie
//
//  Created by 朱家聪 on 15/8/28.
//  Copyright (c) 2015年 zhujiacong. All rights reserved.
//

#import "BaseModel.h"

// 地区
@interface District : BaseModel

@property (nonatomic, copy) NSString *name;         //区名
@property (nonatomic, copy) NSString *districtID;   //id

@property (nonatomic, strong) NSMutableArray *cinemas;  //地区中所有的电影院

@property (nonatomic, assign) BOOL isShow;          //当前地区的影院 隐藏还是显示
@end
