//
//  UIColor+XXExtension.h
//  XXKitDemo
//
//  Created by 王旭 on 16/5/17.
//  Copyright © 2016年 pitt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (XXExtension)

+ (UIColor *) colorWithHexString: (NSString *)color;

+ (UIColor *) colorWithHexString: (NSString *)color Alpha:(CGFloat)alpha;

+ (UIColor *) randomColor;

+ (UIColor *) textColor333333;          //333333
+ (UIColor *) textColor666666;          //666666
+ (UIColor *) textColor7c7c7c;          //7c7c7c
+ (UIColor *) textColor999999;          //999999
+ (UIColor *) textColoraaaaaa;          //aaaaaa
@end
