//
//  PostCell.h
//  TimeMovie
//
//  Created by 朱家聪 on 15/8/26.
//  Copyright (c) 2015年 zhujiacong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Movie.h"

@interface PostCell : UICollectionViewCell

@property (nonatomic, strong) Movie *movie;

/**
 *  翻转单元格
 */
- (void)filpCell;


/**
 *  取消翻转
 */

- (void)backFilp;

@end
