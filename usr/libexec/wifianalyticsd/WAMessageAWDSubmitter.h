//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WAMessageAWDSubmissionDelegate;

@interface WAMessageAWDSubmitter : NSObject
{
    id <WAMessageAWDSubmissionDelegate> _submissionDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000583dc
@property(nonatomic) __weak id <WAMessageAWDSubmissionDelegate> submissionDelegate; // @synthesize submissionDelegate=_submissionDelegate;
- (id)submitMessage:(id)arg1;	// IMP=0x000000010005833c

@end

