//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SiriUISnippetViewController;

@protocol SiriUIReusableView <NSObject>
+ (NSString *)elementKind;
+ (NSString *)reuseIdentifier;
+ (double)defaultHeight;

@optional
@property(nonatomic) __weak SiriUISnippetViewController *snippetViewController;
- (struct UIEdgeInsets)edgeInsets;
@end

