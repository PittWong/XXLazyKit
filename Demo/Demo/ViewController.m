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
@property (nonatomic ,weak) XXChartView *chartView;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.chartView.frame = CGRectMake(0, 100, self.view.width, 120);
    self.chartView.tintColor = [UIColor redColor];
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
XXLazyAnyView(self.view, chartView, XXChartView)
@end
