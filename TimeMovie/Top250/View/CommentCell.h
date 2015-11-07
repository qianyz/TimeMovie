//
//  CommentCell.h
//  TimeMovie
//
//  Created by 朱家聪 on 15/8/28.
//  Copyright (c) 2015年 zhujiacong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Comment.h"


@interface CommentCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *i;
@property (weak, nonatomic) IBOutlet UILabel *commentLabel;
@property (weak, nonatomic) IBOutlet UILabel *rating;
@property (weak, nonatomic) IBOutlet UILabel *name;
@property (weak, nonatomic) IBOutlet UIView *bgView;

@property (nonatomic, strong) Comment *comment;


@end
