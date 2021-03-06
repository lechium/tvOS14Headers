/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@protocol GEOMapItemVenueContents;
@class NSArray, NSString;

@interface MKPlaceVenueInfoContentsViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol> {

	id<GEOMapItemVenueContents> _venueContents;
	NSArray* _labels;

}

@property (nonatomic,retain) id<GEOMapItemVenueContents> venueContents;              //@synthesize venueContents=_venueContents - In the implementation block
@property (nonatomic,retain) NSArray * labels;                                       //@synthesize labels=_labels - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isVisibleWithMapItem:(id)arg1 ;
+(id)venueInfoContentsViewControllerWithMapItem:(id)arg1 ;
-(NSArray *)labels;
-(void)setLabels:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(void)_contentSizeDidChange;
-(BOOL)_canShowWhileLocked;
-(void)infoCardThemeChanged;
-(id)initWithVenueContents:(id)arg1 ;
-(id<GEOMapItemVenueContents>)venueContents;
-(void)_updateRows;
-(void)_addPaddingRowToRows:(id)arg1 ;
-(id)labelWithTitle:(id)arg1 ;
-(id)rowWithLeftLabel:(id)arg1 rightLabel:(id)arg2 ;
-(void)updateLabelsProperties;
-(id)_labelFont;
-(void)setVenueContents:(id<GEOMapItemVenueContents>)arg1 ;
@end

