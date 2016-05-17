//
//  XXLazyCreateView.h
//  XXKitDemo
//
//  Created by 王旭 on 16/5/17.
//  Copyright © 2016年 pitt. All rights reserved.
//

#import <UIKit/UIKit.h>

//通用view
#define XXLazyAnyView(superView,viewName,class)  \
-(class *)viewName {\
if (_##viewName == nil) {\
class *view = [[class alloc]init];\
[superView addSubview:view];\
_##viewName = view;}\
return _##viewName;}


//常用系统 view 创建

#define XXLazyView(superView,viewName)        XXLazyAnyView(superView, viewName, UIView)
#define XXLazyLabel(superView,viewName)       XXLazyAnyView(superView, viewName, UILabel)
#define XXLazyButton(superView,viewName)      XXLazyAnyView(superView, viewName, UIButton)
#define XXLazyImageView(superView,viewName)   XXLazyAnyView(superView, viewName, UIImageView)
#define XXLazyTextField(superView,viewName)   XXLazyAnyView(superView, viewName, UITextField)
#define XXLazyTextView(superView,viewName)    XXLazyAnyView(superView, viewName, UITextView)
#define XXLazyTableView(superView,viewName)   XXLazyAnyView(superView, viewName, UITableView)



//以背景颜色懒加载按钮
#define XXLazyButtonWithColor(superView,buttonName,title,color1,color2,tagNum) \
- (UIButton *)buttonName {\
if (_##buttonName == nil) {\
UIButton *button = [[UIButton alloc]init];\
[button setTitle:title forState:UIControlStateNormal];\
UIColor *color = color1 == nil ? [UIColor blueColor] : color1;\
button.backgroundColor = color;\
[button addTarget:self action:@selector(kingColorChange##buttonName:) forControlEvents:UIControlEventTouchUpInside];\
[button addTarget:self action:@selector(kingColorChange##buttonName:) forControlEvents:UIControlEventTouchDown];\
[button addTarget:self action:@selector(buttonClick:) forControlEvents:UIControlEventTouchUpInside];\
button.tag = tagNum;\
[superView addSubview:button];\
_##buttonName = button;}\
return _##buttonName;}\
- (void)kingColorChange##buttonName:(UIButton *)button {\
static int i = 0; i++;\
UIColor *colorPre = color1 == nil ? [UIColor blueColor] : color1;\
UIColor *colorAfter = color2 == nil ? [UIColor greenColor] : color2;\
button.backgroundColor = i % 2 == 0 ? colorPre : colorAfter;}



@interface XXLazyCreateView : UIViewController

@end
