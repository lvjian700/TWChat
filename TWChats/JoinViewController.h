//
//  ViewController.h
//  TWChats
//
//  Created by lvjian on 12/16/14.
//  Copyright (c) 2014 lvjian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JoinViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *nameField;

- (IBAction)handleJoinAction:(id)sender;
@end

