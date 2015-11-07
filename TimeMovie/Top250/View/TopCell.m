//
//  TopCell.m
//  TimeMovie
//
//  Created by 朱家聪 on 15/8/24.
//  Copyright (c) 2015年 zhujiacong. All rights reserved.
//

#import "TopCell.h"

@implementation TopCell


- (void)setMovie:(Movie *)movie
{
    _movie = movie;
    // 填充数据
    [_movieImageView sd_setImageWithURL:[NSURL URLWithString:_movie.images[MovieImageKeyMedium]]];
    _titleLabel.text = _movie.titleC;
    _ratingLabel.text = [NSString stringWithFormat:@"%.1f", _movie.rating];
    _starView.rating = _movie.rating;
}

@end
