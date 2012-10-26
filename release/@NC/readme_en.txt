--------------------------------------------------------------------------------------
                 Namalsk Crisis and [Nightstalkers] Shadow of Namalsk
                         Update 2: Pathfinder full package
                               -  -  -  -  -  -  -
                               release 16.10.2012
                                 -  -  -  -  -  -
                                  readme_en.txt
--------------------------------------------------------------------------------------

  Update description
--------------------------------------------------------------------------------------
First of all, this update is mainly focused on the improving gameplay and less on fancy
stuff, anyway, few major things to talk about: Namalsk Crisis campaign, Namalsk island
and Shadow of Namalsk features.

I will start with Namalsk Crisis campaign changes..
Because of changes made on Namalsk (will talk about it later), the whole campaign was 
made compatible with it (mainly objects positions and absolute positions in scripts). 
The next change is that I've tried to focus on the overall challenge vs crazyness of 
several missions and so several missions were a bit modified. There has been also chan
ges in cooperation version of Namalsk Crisis campaign, making it a bit better again 
(but it is still highly experimental). Of course, while going through all missions, I 
took a look also on some spelling errors and improved some scripts to behave better. 
Hopefully these improvements and fixes will make the campaign even more solid. There 
has been several reports about difficulty or broken missions etc. caused by using some
mods, which affect default AI behavior, as I said several times, I do not recommend 
playing the campaign with them. Campaign has been created and tested under vanilla 
versions and making the behavior same even with AI mods is almost impossible in some 
cases.

Then there are Namalsk island changes..
Improving Namalsk was my dream for a very long time.. Several broken, not compatible 
or older lowres things. The more I worked on my next map, the more I wanted to repair 
what I have left released. So finally, about a month ago, I simply started with redoin
g some major gamebreaking things on Namalsk! And results are here - I've totally 
changed the terrain grid, the old one from OFP Namalsk version is gone for good and 
replaced with the ultra detailed terrain grid, which makes Namalsk better in gameplay 
and it also change a lot its look! The next and very major things were bugs in 
objects. The most noticable is the addition of paths and positions for AI for all 
custom objects! No more running into building to take a cover against AI! With these 
objects changes, there was also a lot of objects improved by adding better collision 
geometries and more penetrations materials. But that is not all at all! Because we 
have nice flashlights on weapons, we should also have nice lights on the every objects
This was previously bugged or not working at all because objects did not have material
s at all or they had simple shaders, but since this update all custom buildings (and 
even the older ones by BIS) on Namalsk have applied super shader materials and so ligh
ts from cars and flashlights are working awesomely! With the changes of all materials,
I've also took a look on a repairing stupid looking normal maps and removing most of
the specular maps. When the buildings got the fresh air, I've been going through the 
overall AI accessibility of the locations on the island. There has been several chang
es in it - changing positions or even removing some smaller objects. The results are 
quite good, altough my goal was not to redo the whole locations, so you still need to
take in mind, that Namalsk simply does have a bit detailed locations and so you may no
t turn your tank squad there, nor your AI mates (but your squad actually should be 
able roam in the undeground now!). Next things, which kept me worried was the transiti
ons between the snow and normal landscape, so I took a look on it and improved those 
parts, I think, you will like it! With this change came also change of satellitle text
ure and surface mask. Altough I did not have time for redoing the whole satellite text
ure (but it would be of course awesome.. well maybe sometimes later), I've improved it
 on the several places, including that snow transition, also coastline & sea and added
 shadows under vegetation. There is completely new more interresting surface mask gene
 rated, so the landscape is even more interresting now. With the 2d change of coastlin
e comes also the 3d change of the terrain there, which I've tried to make a bit more 
normal than it was with the previous grid. Okay, se we've got some really nice changes
 to island's core. Now some new things.. there are completely new roads, paths and loc
 ations, for example extended Seraja base and new military base under Nitija. I took 
a quick look also on the objects, which could be made even better and choosed candida
tes for the enterable state. SO, there are some new awesome enterable objects, includ
ing buildings surrounding the Seraja transmitter, farm houses and industrial objects. 
When we are on the object topic, I've also upgraded some buildings to its Arma II vers
ions (including railway tracks), randomized some vegetation objects, which were not 
randomized at all and upgraded all rock models by Arma II versions. I recommend you to
 visit changelog section to read more about all the changes, this is just a glimpse! 
Of course, all these changes can have a small impact on the missions made on the 
island before this update, so please test it if everything looks okay and working fine
, believe me, this update is worth updating your missions!
TL;DR Wall of text right? :D Namalsk got an awesome gameplay boost, old terrain 
removed (50 meters between vertexes), new added (6.25 meters), tons of little details 
added to the new terrain, AI can now enter every corner of the map, flashlights are 
working everywhere, everything does look better, new locations and objects added and 
you can even enter more buildings than ever before!
Also, be sure you will scout every corner of this new Namalsk, I've prepared the whole
 new set of easter eggs, some of them are reffering on my next big project! Find out 
what some information before any official information release! :)

So that would be Namalsk, now to the news around Shadow of Namalsk..
I've described many changes, which are connected to the Shadow of Namalsk already when
 I was talking about Namalsk, but I can mention for example that during the upgrading
 materials and overall upgrading object templates on the map, I was able to partially
 clean data files, which results in much smaller size of the main data files for 
Namalsk island. I've also changed completely models of the vegetation (trees to be 
precise), and fixing some visual bugs on them. The long wanted thing for AII 
undeground module was also implemented - module now tracks player's position and in 
case of entering the underground object, it turns off the ambient sounds and start 
looping ambient of the underground object. Of course, upon exiting, it will turn back
 the normal ambient sounds.

Unfortunately with the problematic backward compatibility of model format, this update
does not support classic Arma II, sorry! But it does not mean you can't play Namalsk
Crisis, check http://www.nightstalkers.cz/en_index_nc.php?menu=en_nc_down for your opt
ions (version 1.10 is still supported)
or https://store.bistudio.com/arma2-operation-arrowhead :)

  Screenshots & Videos from the update
--------------------------------------------------------------------------------------
You can browse over 129 screenshots here:
http://www.nightstalkers.cz/en_index_dn.php?menu=en_dn_screens

And check some gameplay vids here:
http://www.nightstalkers.cz/en_index_dn.php?menu=en_dn_vidka

  Update 2 changelog
--------------------------------------------------------------------------------------
* Fixed some spelling errors in the campaign texts
* Improved behavior of some campaign scripts
* Changed respawn type in the coop version of campaign to BIRD
* In the coop version of campaign, some operations were moved only on server (previous
  ly was sometimes something twice)
* In the coop version of campaign, tasks & diary notes are now added and operational o
  n the both sides (previsously was just on the main character)
* Some situations in the coop version of the campaign are scripted now a bit different
  ly than in its SP version (to support better mission flow)
* Upgraded all mission objects and scripts for the newest version of Namalsk
* Changed the basic structure of AII underground laboratory module
* AII underground laboratory module now turn off ambient sounds when entering
* Firestation, supermarket and other smaller details added into Vorkuta
* WIP building in Vorkuta upgraded to Arma II WIP building
* Enhanced some locations from the logical point of view
* Added more holes in fences or normal fence models replaced with the broken ones
* Enhanced the transition to snow, added more variety
* Added new base around the Seraja transmitter
* Added new base under Nitija mountain
* Brensk village changed completely
* Brensk railway station area made a bit bigger with more details
* Added warehouse object near Alakit
* Added more details on the whole island
* Added sandpit model and used in Vorkuta
* Some objects on Namalsk were still in its Arma 1 version, this was changed and I can
  say that Namalsk is really the Arma II island
* The custom railway models replaced with Arma II models + railway track on the bridge
  model modified to fit the new railway models
* Fixed some flickering issues on the objects
* Fixed swimming issues above the ponds / lakes
* Fixed some objects collisions
* Fixed wrong or bad looking mapping on some objects
* White dots, partially seen on the distant lods (while AA on) of the vegetation model
  s are finally gone
* Upgraded most of the used rvmat to the supershaders to support per pixel lights
* Default super shader material (nst\ns\default.rvmat) added to the faces without any 
  material so lights are working there too
* Changed most of the normal maps to be fainter and better looking
* Removed most of the specular maps
* Some objects enhanced to be better looking
* A lot of geometries was redone with a lot of more details
* Fixed player -> objects collisions
* Added more penetration materials to the geometries
* Added paths for AI to the all possible objects and created positions for AI
* Changed brightness of the artifical ground objects above AII underground
* Added roadway textures (=sounds) on even more objects (sound of the surface you walk
  ing on)
* Fixed shadow lod issue on the hut_old02.p3d, moved into ns2 addon to arma1 folder un
  der new name hut_old01.p3d (where converted arma 1 objects are located) and added su
  per shader support (flashlight support)
* More of the Arma 1 objects, not included in Arma 2 and still used by Namalsk, added 
  to the mod files and added super shader support
* Added interior for the seb_bouda_plech.p3d
* Added interior for the seb_bouda1.p3d + fuctional doors
* Added interior for the seb_bouda3.p3d
* Added interior for the seb_mine_maringotka.p3d + fuctional doors
* Added interior for the domek_podhradi_1.p3d
* Added interior for the vys_budova.p3d -> was 2 objects in one model, now didived int
  o vys_budova_p1.p3d and vys_budova_p2.p3d + functional doors
* budova4.p3d changed to its arma 2 version (mil_barracks_i) - interior version
* budova4_winter.p3d changed to its arma 2 version (same as previous), but it was also
  retextured so it fits better to the winter setting
* Fixed shading issues on molovabud1.p3d
* Fixed - penetration material for glass was not penetrable - changed to glassPlate
* Fixed issues with some ladders
* plot_provizorni.p3d replaced with the custom model, which is lower and so possible t
  o cross using 'v'
* plastic bollard had too high mass (10kg) making it pretty serious block for normal c
  ars - transferred from arma data files to mod files and changed to 1 kg
* Some models renamed, so their name corresponds more with the actual model
* Added a lot of new classes for different objects
* Arma II model A_AdvertColumn.p3d without geometry was transferred to the mod files a
  nd added all needed things to be working properly now
* Upgraded the terrain grid of Namalsk, before - 50 meters between vertexes of the ter
  rain, now 6.25 meters
* A lot of nice details to the terrain grid added
* Enhanced terrain detail on the coastline
* Too steep slopes modified to not be too steep or designed differently
* Changed clutter (=grass) object parameters and the use of them in CfgSurfaceCharacte
  rs
* Randomized sizes of the not randomized vegetation models (brings more variety)
* More small spruces added to the forests
* Spruce models upgraded, changed colors a bit (both winter and non winter version)
* Replaced all arma 1 versions of the rocks with arma 2 models and small boulders size
  was randomized
* Boulders field were cleaned a bit, looking more believable now
* Overlapping road models were removed from the Namalsk <-> Tara crossing
* Keypoints revamp, added more named locations
* Some locations were made more compatible for AI - removing objects or chaging object
  s positions
* Size of satellite texture and surface mask increased to 12800x12800
* Surface mask was completely redone, adding more variety to the surface on Namalsk wi
  th more details
* Minor fixes on the satellite texture + proper sea and coastline made
* More variety was added to the snow tranistion - both satellite and surface mask chan
  ges
* Added a bit of snow on the hill on Tara island
* Added "shadows" under vegetation models on the snow (fits better to the almost white
  terrain)
* Removed 2nd nonsense airfield (for AI)
* Namalsk terrain surfaces were renamed - added prefix 'nam_*' ('snih' changed complet
  ely, to 'nam_snow')
* Default time on Namalsk had wrong year, now changed to 2011
* Removed some redundant data files for the island
* Changed skybox textures for Namalsk
* Proper bumpmaps were generated for the each surface texture, used by Namalsk
* Added a faint midDetailTexture for Namalsk (previously without any midDetailTexture)


--------------------------------------------------------------------------------------

          Visit http://www.nightstalkers.cz for actual information etc.!
          See also released project - DayZ: Namalsk!
          http://www.nightstalkers.cz/en_index_dn.php

--------------------------------------------------------------------------------------



--------------------------------------------------------------------------------------
                                    Arma 2 
                                Namalsk Crisis 
                                 version 1.15
--------------------------------------------------------------------------------------


A lot of other nice screenshots from the gameplay 
http://www.nightstalkers.cz/en_index_nc.php?menu=en_nc_screens
Newest trailer for Namalsk Crisis 
http://www.youtube.com/watch?v=0pYF3J6QHDw
Older trailer 
http://www.youtube.com/watch?v=EOsJtKd_xLA


  Description
--------------------------------------------------------------------------------------
Namalsk Crisis is a campaign for Arma II or Arma II Combined Operations with over 22 m
issions. You will be a part of the conflict on the island called Namalsk. Namalsk beco
me as a target for an unknown corporation called NAC (Namalsk corporation). After seve
ral months of researches on an unknow alien object, which they found on Namalsk, with 
a very dangerous experiments, armies of Russia and USA are trying to stop them. Unfort
unately, they don't know with whom have honor.
You are able to see the whole conflict from different sides and different people, for 
example members of private scientist and military group called Nightstalkers, special 
forces team of USMC, with leader Ryan Goben or also Russian specnaz attack group with 
leader Yevgeniy Pecharov! You will face different situations, missions have a very str
ong atmosphere with wisely chosen music and various sound and graphic effects. Situati
on is described in ingame diary notes and task descriptions and also, you can find a l
ot of information on the main website - http://www.nightstalkers.cz 

Campaign was created mostly under normal Arma II, anyway, you can play also under Comb
ined Operations version (Arma II + Arma II OA). Campaign is fully depending on the con
tent of the modification called [Nightstalkers] Shadow of Namalsk. So, campaign is rel
eased with this modification together in version v1.0, more informations about everyth
ing about this mod and its unique features, visit 
http://www.nightstalkers.cz/en_index_son.php?menu=en_son_popis or scroll down.

Along with campaign release is also included unique SP/MP mission (based on Benny's ex
cellent warfare mission), set on Namalsk, with edited sides and additional functions. 
This warfare mission featuring united forces of USA and Russian Federation, trying to 
stop NAC and their experiments and the NAC, which are trying to hold Namalsk and their
researches with everything.
For more detailed information about this wafare mission, continue here 
http://www.nightstalkers.cz/en_index_nc.php?menu=en_nc_warfare.

  Tip!
--------------------------------------------------------------------------------------
Through whole campaign, you will have a task to find highly classified enemy intel abo
ut what NAC actually doing on Namalsk and what's going at all there.
Once you will found it, mission will print you access code into rpt file or you will 
just need to remember it / copy it from diary note (there will be all instructions for
using this access code + of course that intel).
But because of amount of information there, I have managed to create a special section
on the official website called NAC HQ, you will be able to use your code from mission
/ rpt log file and read all information without to be actually ingame, much better 
formatted.
NAC HQ > http://www.nightstalkers.cz/en_index_nc.php?menu=en_nc_nachq)

  Campaign in few points
--------------------------------------------------------------------------------------
- Compatible with classic Arma II and also Arma II CO
- 4 prologue missions + 18 main missions
- Unique warfare mission focused on showing story from the campaign!
- Atmospheric missions with wisely chosen music and sounds
- Unique features, situations (such as escape from the A2 underground) and sound / gra
  phics effects
- Including non-linear features
- Swift gameplay
- Full background of story provided on http://www.nightstalkers.cz and continuing also
  in-game with diary notes and task description
- Tremendous count of texts avaiable in English or Czech language
- Loading pictures for every mission (showed only in CO)
- Playing from different persons, you can see the conflict from different sides
- Unique factions, characters

  Notes about gameplay
--------------------------------------------------------------------------------------
* It is recommended to have music turned on during gameplay
* It is also recommended to have post process effects at least on low
* Autosaves are placed where it is needed
* Campaign went through numerous of beta tests, missions should be without bugs
* I have tried to make mission friendly as possible (without problems with AI)
* Campaign have strings for all Arma II supported languages (if you have for example 
  Polish version, you don't need to switch other language)
* Because of an amount of texts in this 22 mission campaign, only English and Czech 
  translation is available 
* It is recommended to not use much ESC key (http://dev-heaven.net/issues/14806)
* Altough campaign was partly developed in Arma II CO and also tested in CO, gameplay 
  could be little different under Arma II classic or Arma II CO. 
* I do not recommend playing the campaign and using mods, which can alter AI behavior!



--------------------------------------------------------------------------------------
                                  [Nightstalkers] 
                                 Shadow of Namalsk
--------------------------------------------------------------------------------------

  Description
--------------------------------------------------------------------------------------
As you probably read about Namalsk Crisis campaign above, this modification is the key 
part of the Namalsk Crisis campaign. From the first ArmA 1 version, I have changed and 
added a lot of things to this modification. I have to admit, I never thought, that I 
will be able to create stuff like you can see in this modification. Because of its 
functions and content, this modification could also provide to Arma II S.T.A.L.K.E.R. 
fans basics for creating missions with S.T.A.L.K.E.R. atmosphere in Arma II. Modificat
ion was developed mainly in Arma II classic, so, some things are not changed - 
mainly because of not enough time and also because of compatibility in Arma II and 
Arma II CO.

  Modification in few points
--------------------------------------------------------------------------------------
- Namalsk island in the 1.55 version
- Factions for Namalsk Crisis campaign
- Editor modules
- Sound & music database for mission editing
- Other necessary data for Namalsk Crisis campaign
- Compatible with classic Arma II and also Arma II CO
- Basic UI redefinition (changed mainly loading screens)


--------------------------------------------------------------------------------------
 › Factions for Namalsk Crisis campaign
--------------------------------------------------------------------------------------

  NAC
--------------------------------------------------------------------------------------
The main "bad guys", defending their researches and their device with stolen Russian 
vehicles and weapons.
Pictures > http://www.nightstalkers.cz/en_index_son.php?menu=en_son_screens

  Nightstalkers
--------------------------------------------------------------------------------------
One of the playable factions in the Namalsk Crisis story, featuring bunch of the 
explorers interested in all sort of mysterious things and experienced in many fields. 
Private military company called Nightstalkers. 5 members - Tamika Maclemar, Michael 
Zaytsev, Peter Trepov, Alex Nuvikov and commander Maksim Solovyov.

  Mutants
--------------------------------------------------------------------------------------
These strange creatures showed up from nowhere after NAC's experiments and you need to
be ready, because they don't want to play with you!
Including well known stupid zombies (using excellent anims by TeaCup - Thanks a lot!) 
and fast, deadly, invisible bloodsuckers (with 3 skins!).
Pictures > http://www.nightstalkers.cz/en_index_son.php?menu=en_son_screens
Video > http://www.youtube.com/watch?v=xKa4kHXZxPU


--------------------------------------------------------------------------------------
 › Editor modules
--------------------------------------------------------------------------------------
I have to say, this becomes through developing the most important part of this 
modification. There is available and ready for use 6 modules along with functions and 
scripts for units. All tested and compatible with multiplayer. 
I will describe these modules here in short, but if you are interested, 
you should check detailed section on official web
 - http://www.nightstalkers.cz/en_index_son.php?menu=en_son_moduly.


  Effect: Namalsk default gray color
  Effect: Namalsk default color
  Effect: Namalsk cold color
--------------------------------------------------------------------------------------
Type: Modules for chaging mission atmosphere.
These modules are created for a better atmosphere in missions on Namalsk. You can 
choose from 3 types - cold, gray, default. For use, insert chosen module into your 
mission.


  AII Laboratory
--------------------------------------------------------------------------------------
Type: Module for controlling the unique underground of the object AII.
I think, you know what Namalsk is and also, that Namalsk is the first island, which 
have an underground object. With this module you are able to fill this underground 
with different kind of small objects and also, you are able to control underground 
light system.


  Blowout
--------------------------------------------------------------------------------------
Type: Module for controlling discharges from an alien object on Namalsk
This is one of the most complex and very mission-changing module. It can generate 
random discharges in your mission just putting module into your mission, you are 
able to use protection against it or also modify its strength! Have you ever tried, 
what impact will have an EMP in your mission? 
This module is also offering single function (for not so dynamic missions).


  Mutants
--------------------------------------------------------------------------------------
Type: Module for spawning and controlling mutants.
One of the factions in this modification is the Mutant faction, these strange 
creatures showed up from nowhere after NAC's experiments and you need to be ready, 
because they don't want to play with you! This module is for a random spawning of 
mutants in your mission, you can turn it off whether you want and protect with 
easy method important persons in your mission against these creatures.


--------------------------------------------------------------------------------------
 › Editor's depot
--------------------------------------------------------------------------------------
I'm trying to describe on http://www.nightstalkers.cz/ everything, what you need to 
use functions of the [Nightstalkers] Shadow of Namalsk modification.
Here are the most important section, which I will recommend you to check:

Class names > http://www.nightstalkers.cz/en_index_nc.php?menu=en_nc_classnames
 (Offline version http://download.nightstalkers.cz/ns2/ns_classnames.pdf )
Modules description > http://www.nightstalkers.cz/en_index_son.php?menu=en_son_moduly
 (Offline version http://download.nightstalkers.cz/ns2/ns_modules.pdf ) 


--------------------------------------------------------------------------------------
 › Installation instructions
--------------------------------------------------------------------------------------
About needed version, newer = better.

Warning!! This Update 2 full package needs Arma 2: COmbined Operations, this update do
es not have support of classic Arma II, sorry!

Extract downloaded archive nc_pathfinder_full.7z into your Arma II folder and run Arma 
II Combined Operations with -mod=@NC parameter (default folder name).

All pbo's signed with v2 server keys!


--------------------------------------------------------------------------------------
 › File list
--------------------------------------------------------------------------------------

  List of files in nc_pathfinder_full.7z
--------------------------------------------------------------------------------------
\@NC\Addons\namalsk.pbo
\@NC\Addons\namalsk.pbo.NST.bisign
\@NC\Addons\ns.pbo
\@NC\Addons\ns.pbo.NST.bisign
\@NC\Addons\ns2.pbo
\@NC\Addons\ns2.pbo.NST.bisign
\@NC\Addons\ns_anims.pbo
\@NC\Addons\ns_anims.pbo.NST.bisign
\@NC\Addons\ns_fraction.pbo
\@NC\Addons\ns_fraction.pbo.NST.bisign
\@NC\Addons\ns_missions.pbo
\@NC\Addons\ns_missions.pbo.NST.bisign
\@NC\Addons\ns_modules.pbo
\@NC\Addons\ns_modules.pbo.NST.bisign
\@NC\Addons\ns_music.pbo
\@NC\Addons\ns_music.pbo.NST.bisign
\@NC\Addons\ns_mutants.pbo
\@NC\Addons\ns_mutants.pbo.NST.bisign
\@NC\Addons\ns_plants.pbo
\@NC\Addons\ns_plants.pbo.NST.bisign
\@NC\Addons\ns_rocks.pbo
\@NC\Addons\ns_rocks.pbo.NST.bisign
\@NC\Addons\ns_sounds.pbo
\@NC\Addons\ns_sounds.pbo.NST.bisign
\@NC\Addons\ns_ui.pbo
\@NC\Addons\ns_ui.pbo.NST.bisign
\@NC\mod.cpp
\@NC\ns_classnames.pdf
\@NC\ns_modules.pdf
\@NC\readme_cz.txt
\@NC\readme_en.txt
\Keys\NST.bikey


--------------------------------------------------------------------------------------
 › Thanks to
--------------------------------------------------------------------------------------
Aeious "BlackOuT" Killhound (testování, propagace)
Apo (testing Namalsk in A1/A2, testing beta version of Namalsk Crisis)
Benny (for his excellent warfare mission)
Crytek (rifle texture)
Dokix2 (testing Namalsk in A2)
Eawes (testing, translation, developer support)
Edge (testing pre-release version)
Grub (testing pre-release version)
GSC Gameworld (some textures, models and sounds)
JTS (propagace, testování)
Kju (config optimalization, advices and bug report)
Mikebart (grass texture)
Pikus (some models of objects)
Rsa Viper (mp testing, developer support)
Saigos (photos for making Jalovisko village)
SenChi (grass texture)
TeaCup (excellent zombie animation)
To all music creators {
  Hans Zimmer
  Sean Murray
  Jesper Kyd
  Rom Di Prisco
  MoozE
  Firelake
  Harry Gregson-Williams
  Norihiko Hibino
  Clinton Shorter
  Clint Mansell
  Two Steps From Hell
  Alexey Omelchuk
  Jon Hallur
  Don Davis
  Graeme Revell
  Groove Armada
  ATB
  Ondřej Matějka
  Metro 2033
  Massive Attack
  Trevor Rabin
  Peter Antovszki  
};
To all, who helped create Namalsk better with reports
To guys on community forums and pages for support
YOU for playing!
and Bohemia Interactive for great game!

Last few words, all stuff here was created mainly by 1 person in his free time.
Enjoy!

Sumrak,
leader and creator of Namalsk Crisis campaign & Nightstalkers: Shadow of Namalsk mod
sumrak@nightstalkers.cz
http://www.nightstalkers.cz
http://twitter.com/#!/Sumr4k
http://www.xfire.com/profile/sumr4k/