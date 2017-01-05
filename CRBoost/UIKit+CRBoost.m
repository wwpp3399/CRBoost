//
//  NSObject+UIKit_CRBoost.m
//  BMKP Driver Mobile
//
//  Created by Eric Wu on 16/4/19.
//  Copyright © 2016年 Jigs. All rights reserved.
//

#import "UIKit+CRBoost.h"

@implementation UIBarButtonItem (CRBoost)
+ (UIBarButtonItem *)barButtonWithImage:(UIImage *)image selectedImage:(UIImage *)selectedImage target:(id)target action:(SEL)action
{
    UIButton *button = [UIButton buttonWithType:UIButtonTypeCustom];
    button.imageView.contentMode = UIViewContentModeScaleAspectFit;
    button.size = CGSizeMake(30, 30);
    [button setImage:image forState:UIControlStateNormal];
    [button setImage:selectedImage forState:UIControlStateSelected];
    [button addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
    UIBarButtonItem *barItem = [[UIBarButtonItem alloc] initWithCustomView:button];
    return barItem;
}
@end
