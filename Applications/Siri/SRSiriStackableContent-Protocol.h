//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, SRSiriViewStackConstraints;
@protocol SRSiriStackableContentDelegate;

@protocol SRSiriStackableContent
@property(retain, nonatomic) SRSiriViewStackConstraints *stackConstraints;
@property(readonly, nonatomic) struct CGSize portraitContentSize;
@property(nonatomic) double attachmentYOffset;
@property(nonatomic) long long attachmentType;
@property(nonatomic) __weak id <SRSiriStackableContentDelegate> stackContainerDelegate;

@optional
@property(retain, nonatomic) NSArray *customAttachmentConstraints;
@property(nonatomic) _Bool useLowerPriorityHeightConstraint;
- (void)relayout;
@end

