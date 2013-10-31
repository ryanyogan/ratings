//
//  PlayerCell.h
//  Ratings
//
//  Created by Ryan Yogan on 10/30/13.
//  Copyright (c) 2013 Ryan Yogan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayerCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *gameLabel;
@property (nonatomic, weak) IBOutlet UIImageView *ratingImageView;

@end
