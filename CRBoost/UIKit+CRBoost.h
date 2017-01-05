//
//  NSObject+UIKit_CRBoost.h
//  BMKP Driver Mobile
//
//  Created by Eric Wu on 16/4/19.
//  Copyright © 2016年 Jigs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIBarButtonItem (CRBoost)
+ (instancetype)barButtonWithImage:(UIImage *)image selectedImage:(UIImage *)selectedImage target:(id)target action:(SEL)action;
@end
