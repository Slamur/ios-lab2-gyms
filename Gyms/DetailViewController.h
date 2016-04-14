//
//  DetailViewController.h
//  Gyms
//
//  Created by Admin on 14.04.16.
//  Copyright © 2016 SSAU. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

