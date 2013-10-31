//
//  PlayerDetailsViewController.m
//  Ratings
//
//  Created by Ryan Yogan on 10/31/13.
//  Copyright (c) 2013 Ryan Yogan. All rights reserved.
//

#import "PlayerDetailsViewController.h"

@interface PlayerDetailsViewController ()

@end

@implementation PlayerDetailsViewController

- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];

    // Uncomment the following line to preserve selection between presentations.
    // self.clearsSelectionOnViewWillAppear = NO;
 
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (IBAction)cancel:(id)sender
{
    [self.delegate playerDetailsViewControllerDidCancel:self];
}

- (IBAction)done:(id)sender
{
    [self.delegate playerDetailsViewControllerDidCancel:self];
}


@end
