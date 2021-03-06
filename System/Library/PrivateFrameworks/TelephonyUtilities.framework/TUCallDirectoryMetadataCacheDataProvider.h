/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TUMetadataCacheDataProvider.h>

@interface TUCallDirectoryMetadataCacheDataProvider : TUMetadataCacheDataProvider {

	/*^block*/id _countryDialingCode;
	/*^block*/id _firstIdentificationEntriesForEnabledExtensions;

}

@property (nonatomic,copy) id countryDialingCode;                                          //@synthesize countryDialingCode=_countryDialingCode - In the implementation block
@property (nonatomic,copy) id firstIdentificationEntriesForEnabledExtensions;              //@synthesize firstIdentificationEntriesForEnabledExtensions=_firstIdentificationEntriesForEnabledExtensions - In the implementation block
-(id)init;
-(void)dealloc;
-(void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2 ;
-(id)countryDialingCode;
-(void)setCountryDialingCode:(id)arg1 ;
-(id)firstIdentificationEntriesForEnabledExtensions;
-(void)setFirstIdentificationEntriesForEnabledExtensions:(id)arg1 ;
@end

