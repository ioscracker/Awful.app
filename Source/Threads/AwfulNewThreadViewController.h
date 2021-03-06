//  AwfulNewThreadViewController.h
//
//  Copyright 2013 Awful Contributors. CC BY-NC-SA 3.0 US https://github.com/Awful/Awful.app

#import "AwfulComposeTextViewController.h"
#import "AwfulModels.h"

/**
 * An AwfulNewThreadViewController is for writing the OP of a new thread.
 */
@interface AwfulNewThreadViewController : AwfulComposeTextViewController

/**
 * Returns an initialized AwfulNewThreadViewController. This is the designated initializer.
 *
 * @param forum The forum in which the new forum is posted.
 */
- (id)initWithForum:(AwfulForum *)forum;

@property (readonly, strong, nonatomic) AwfulForum *forum;

/**
 * Returns the newly-posted thread.
 */
@property (readonly, strong, nonatomic) AwfulThread *thread;

@end
