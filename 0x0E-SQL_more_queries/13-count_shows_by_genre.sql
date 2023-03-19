-- amount of shows associciated with each genre
SELECT `tv_genre`.`name` AS `genre`,
COUNT(`tv_show_genres`.`genre_id`) AS `number_of_shows`
From `tv_genre` INNER JOIN `tv_show_genres`
ON `tv_genre.id` = `tv_show_genres`.`genre_id`
GROUP BY `genre`
ORDER BY `number_of_show` DESC;