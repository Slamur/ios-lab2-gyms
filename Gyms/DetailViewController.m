//
//  DetailViewController.m
//  Gyms
//
//  Created by Admin on 14.04.16.
//  Copyright © 2016 SSAU. All rights reserved.
//

#import "DetailViewController.h"

@interface DetailViewController ()

@end

@implementation DetailViewController

#pragma mark - Managing the detail item

- (void)setDetailItem:(id)newDetailItem {
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;
            
        // Update the view.
        [self configureView];
    }
}

- (void)configureView {
    // Update the user interface for the detail item.
    if (self.detailItem) {
        id exercises = [[self.detailItem valueForKey:@"exercises"] allObjects];
        id dateDescription = [[self.detailItem valueForKey:@"date"] description];
        
        NSUInteger ec = [exercises count];
        
        self.detailDescriptionLabel.text = [NSString stringWithFormat:@"Exercises count %lu date %@", (unsigned long)ec, dateDescription];
    }
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [self configureView];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
