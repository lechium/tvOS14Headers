//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HBTopShelfParadeItem.h"

#import "HBUITopShelfPromotionParadeItem-Protocol.h"

@class HBUITopShelfAsyncImage, NSArray, NSDate, NSNumber, NSString, NSURL, UIImage, _TVContentRating;
@protocol HBUITopShelfParadeAction, HBUITopShelfRottenTomatoesRating;

@interface HBTopShelfPromotionParadeItem : HBTopShelfParadeItem <HBUITopShelfPromotionParadeItem>
{
}

- (id)_promotionImageName;	// IMP=0x0000000100042f80
- (id)_topShelfPromotionCarouselItem;	// IMP=0x0000000100042f74
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100042e9c
@property(readonly, nonatomic) long long promotionTitleUserInterfaceStyle;
@property(readonly, nonatomic) UIImage *promotionImage;
@property(readonly, nonatomic) NSString *promotionText;
- (id)initWithTopShelfPromotionCarouselItem:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x0000000100042cf4

// Remaining properties
@property(readonly, nonatomic) NSURL *cinemagraphURL;
@property(readonly, nonatomic) NSNumber *commonSenseRecommendedAge;
@property(readonly, nonatomic) unsigned long long contentOptions;
@property(readonly, nonatomic) _TVContentRating *contentRating;
@property(readonly, nonatomic) UIImage *contextImage;
@property(readonly, nonatomic) NSString *contextTitle;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSString *genre;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSArray *namedAttributes;
@property(readonly, nonatomic) NSString *photosAssetIdentifier;
@property(readonly, nonatomic) NSURL *previewVideoURL;
@property(readonly, nonatomic) id <HBUITopShelfParadeAction> primaryAction;
@property(readonly, nonatomic) id <HBUITopShelfRottenTomatoesRating> rottenTomatoesRating;
@property(readonly, nonatomic) id <HBUITopShelfParadeAction> secondaryAction;
@property(readonly, nonatomic) NSString *summary;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *termsAndConditionsText;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) HBUITopShelfAsyncImage *titleImage;

@end

