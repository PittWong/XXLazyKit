//
//  XXLazyCreateView.h
//  XXKitDemo
//
//  Created by 王旭 on 16/5/17.
//  Copyright © 2016年 pitt. All rights reserved.
//

#import <UIKit/UIKit.h>

//通用view
#define KINGLazyAnyView(superView,viewName,class)  \
-(class *)viewName {\
if (_##viewName == nil) {\
class *view = [[class alloc]init];\
[superView addSubview:view];\
_##viewName = view;}\
return _##viewName;}


//常用系统 view 创建

#define KINGLazyView(superView,viewName)        KINGLazyAnyView(superView, viewName, UIView)
#define KINGLazyLabel(superView,viewName)       KINGLazyAnyView(superView, viewName, UILabel)
#define KINGLazyButton(superView,viewName)      KINGLazyAnyView(superView, viewName, UIButton)
#define KINGLazyImageView(superView,viewName)   KINGLazyAnyView(superView, viewName, UIImageView)
#define KINGLazyTextField(superView,viewName)   KINGLazyAnyView(superView, viewName, UITextField)
#define KINGLazyTextView(superView,viewName)    KINGLazyAnyView(superView, viewName, UITextView)
#define KINGLazyTableView(superView,viewName)   KINGLazyAnyView(superView, viewName, UITableView)



//以背景颜色懒加载按钮
#define KINGLazyButtonWithColor(superView,buttonName,title,color1,color2,tagNum) \
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
