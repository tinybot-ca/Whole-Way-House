//
//  SponsorData.h
//  WWH
//
//  Created by Michael Whang on 6/15/14.
//  Copyright (c) 2014 Devolution Studios. All rights reserved.
//

#import <Foundation/Foundation.h>

// No longer used as of VERSION 1.2 - switched to Parse for backend for loading sponsor data

#define SPONSOR_NAME @"Sponsor Name"
#define SPONSOR_TAGLINE @"Sponsor Tagline"
#define SPONSOR_URL @"Sponsor Website"

@interface SponsorData : NSObject

+ (NSArray *)allSponsors; // returns an array of NSDictionary's

@end
