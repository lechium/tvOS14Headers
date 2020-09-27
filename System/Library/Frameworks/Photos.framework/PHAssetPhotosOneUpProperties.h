/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@class NSData, NSString;

@interface PHAssetPhotosOneUpProperties : PHAssetPropertySet {

	BOOL _reverseLocationDataIsValid;
	NSData* _reverseLocationData;
	unsigned long long _variationSuggestionStates;

}

@property (nonatomic,readonly) BOOL reverseLocationDataIsValid;                           //@synthesize reverseLocationDataIsValid=_reverseLocationDataIsValid - In the implementation block
@property (nonatomic,readonly) NSData * reverseLocationData;                              //@synthesize reverseLocationData=_reverseLocationData - In the implementation block
@property (nonatomic,readonly) NSString * addressString; 
@property (nonatomic,readonly) unsigned long long variationSuggestionStates;              //@synthesize variationSuggestionStates=_variationSuggestionStates - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(NSString *)addressString;
-(id)_locationInfo;
-(BOOL)reverseLocationDataIsValid;
-(NSData *)reverseLocationData;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(id)localizedGeoDescriptionIsHome:(BOOL*)arg1 ;
-(id)placeNamesForLocalizedDetailedDescriptionIsHome:(BOOL*)arg1 ;
-(unsigned long long)variationSuggestionStates;
@end
