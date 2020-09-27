/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKDAAPShowsBaseFetchOperation.h>

@class TVHKMediaEntityIdentifier;

@interface TVHKDAAPShowEpisodesFetchOperation : TVHKDAAPShowsBaseFetchOperation {

	TVHKMediaEntityIdentifier* _sourceSeasonIdentifier;

}

@property (nonatomic,copy) TVHKMediaEntityIdentifier * sourceSeasonIdentifier;              //@synthesize sourceSeasonIdentifier=_sourceSeasonIdentifier - In the implementation block
-(id)initWithRequest:(id)arg1 mediaServerIdentifier:(id)arg2 sessionState:(id)arg3 requestSession:(id)arg4 fetchCache:(id)arg5 ;
-(BOOL)_useFetchCache;
-(TVHKMediaEntityIdentifier *)sourceSeasonIdentifier;
-(id)_episodesFetchRequest;
-(id)_mediaEntityCacheWithFetchCache:(id)arg1 ;
-(id)_mediaEntitiesWithFetchedEpisodes:(id)arg1 andMediaEntityCache:(id)arg2 ;
-(void)setSourceSeasonIdentifier:(TVHKMediaEntityIdentifier *)arg1 ;
@end
