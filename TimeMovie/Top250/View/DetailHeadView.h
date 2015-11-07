//
//  DetailHeadView.h
//  TimeMovie
//
//  Created by 朱家聪 on 15/8/28.
//  Copyright (c) 2015年 zhujiacong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailHeadView : UIView

@property (weak, nonatomic) IBOutlet UIButton *imageButton;
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *directorsLabel;
@property (weak, nonatomic) IBOutlet UILabel *actorsLabel;
@property (weak, nonatomic) IBOutlet UILabel *typeLabel;
@property (weak, nonatomic) IBOutlet UILabel *yearLabel;


@property (nonatomic, weak) UINavigationController *navigationController;

@end
