//
//  PlayersViewController.h
//  Ratings
//
//  Created by Ryan Yogan on 10/30/13.
//  Copyright (c) 2013 Ryan Yogan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PlayerDetailsViewController.h"

@interface PlayersViewController : UITableViewController <PlayerDetailsViewControllerDelegate>

@property (nonatomic, strong) NSMutableArray *players;
@end
