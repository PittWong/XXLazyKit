//
//  XXButtonReplaceCell.h
//  Demo
//
//  Created by 王旭 on 16/5/25.
//  Copyright © 2016年 Pitt. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, XXButtonReplaceCellMessageSide) {               //信息框对齐模式 default is XXButtonReplaceCellMessageSideLeft
    XXButtonReplaceCellMessageSideLeft,
    XXButtonReplaceCellMessageSideRight,
    XXButtonReplaceCellMessageSideCenter
};
typedef NS_ENUM(NSInteger, XXButtonReplaceCellAccessoryType) {             //右侧附加类型
    XXButtonReplaceCellAccessoryNone,                                      // don't show any accessory view
    XXButtonReplaceCellAccessoryIndicator,                                 // regular chevron. doesn't track  right arrow
    XXButtonReplaceCellAccessorySwitch                                      //swich .doesn't track
};
@interface XXButtonReplaceCell : UIButton

@property (nonatomic ,copy) NSString *title;
@property (nonatomic ,copy) NSString *message;
@property (nonatomic ,copy) NSString *keyMark;

@property (nonatomic) XXButtonReplaceCellAccessoryType accessoryType;       // default is UITableViewCellAccessoryNone. use to set standard type
@property (nonatomic, strong) UIView *accessoryView;                  // if set, use custom view. ignore accessoryType. tracks if enabled can calls accessory action
@property (nonatomic ,assign) BOOL switchOn;                //当选择了XXButtonLikeCellAccessorySwitch后有意义
@property (nonatomic ,assign) BOOL lineHidden;

- (void)addTarget:(id)target action:(SEL)action messageSide:(XXButtonReplaceCellMessageSide)messageSide Title:(NSString *)title Tag:(NSInteger)tag ;
- (void)setQuickEditWithKeyboardType:(UIKeyboardType) keyboardType;    //需要编辑时设置此项

@end
