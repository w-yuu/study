//
//  ViewController.h
//  test3
//
//  Created by none on 12/04/10.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (nonatomic,strong) IBOutlet UIButton *myButton;

@property (nonatomic,strong) IBOutlet UILabel *myLabel;


-(IBAction)sayhello:(id)sender;

@end
