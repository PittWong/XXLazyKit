//
//  ViewController.m
//  Demo
//
//  Created by 王旭 on 16/5/18.
//  Copyright © 2016年 Pitt. All rights reserved.
//
#import "XXLazyKitHeader.h"

#import "ViewController.h"

@interface ViewController ()
@property (nonatomic ,weak) UIButton *button;
@property (nonatomic ,weak) UITableView *tableView;
@property (nonatomic ,weak) XXLineChartView *lineChartView;
@property (nonatomic ,weak) XXColumnChartView *columnChartView;

@end

@implementation ViewController

- (void)viewDidLoad {
    //testguagua11
    [super viewDidLoad];
    self.lineChartView.frame = CGRectMake(0, 100, self.view.width, 120);
    self.lineChartView.tintColor = [UIColor redColor];
    
    self.columnChartView.frame = CGRectMake(0, 350, self.view.width, 120);
    self.columnChartView.tintColor = [UIColor greenColor];
    
    NSString *string = @"魔方<jkljfdklsj><kfdjsfkjsl>guagua<加快了加快了几分开了家>";
    NSString *resultString = [string removeStringBetweenString:@"<" andString:@">"];
    NSLog(@"%@",resultString);
    
    resultString = [string stringByReplacingOccurrencesOfString:nil withString:nil];
    resultString = [string stringByReplacingCharactersInRange:NSRangeFromString(@"guagu") withString:@""];
    // Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (void)buttonClick:(UIButton *)button {
    
}
XXLazyButton(self.view, button)
XXLazyTableView(self.view, tableView)
XXLazyAnyView(self.view, lineChartView, XXLineChartView)
XXLazyAnyView(self.view, columnChartView, XXColumnChartView)

@end
